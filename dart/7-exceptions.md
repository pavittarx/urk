# `assert` statement

During development, use an assert statement — `assert(condition, optionalMessage);` — to disrupt normal execution if a boolean condition is false.

```dart
  assert(urlString.startsWith('https'),
    'URL ($urlString) should start with "https".');
```

The first argument to assert can be any expression that resolves to a boolean value. If the expression’s value is true, the assertion succeeds and execution continues. If it’s false, the assertion fails and an exception `AssertionError` is thrown.

- Flutter enables assertions in debug mode.
- Development-only tools such as dartdevc typically enable assertions by default.
- Some tools, such as dart run and dart2js support assertions through a command-line flag: `--enable-asserts`.
- In production code, assertions are ignored, and the arguments to assert aren’t evaluated.

# Exceptions

Your Dart code can throw and catch exceptions. Exceptions are errors indicating that something unexpected happened. 

If the exception isn’t caught, the `isolate` that raised the exception is suspended, and typically the isolate and its program are terminated.

*Instead of threads, all Dart code runs inside of isolates. Each isolate has its own memory heap, ensuring that no isolate’s state is accessible from any other isolate.* [- Dart Docs](https://dart.dev/guides/language/language-tour#isolates)


Dart's exceptions are unchecked exceptions. Methods don't declare which exceptions they might throw, and you are not required to catch any exceptions.

Dart provides `Exception` and `Error` types, as well as numerous predefined subtypes. You can, of course, define your own exceptions. However, Dart programs can throw any non-null object—not just Exception and Error objects—as an exception.


## 1. `throw` -ing exceptions

```dart
  throw FormatException('Expected at least 1 section');
``` 

```dart 
   throw 'Out of Llamas.';
```

- Because throwing an exception is an expression, you can throw exceptions in => statements, as well as anywhere else that allows expressions:

```dart
  void distanceTo(Point other) => throw UnimplementedError();
```

**Production-quality code usually throws types that implement Error or Exception.**

<br/>

## 2. Catching Exceptions


```dart
  try {
    breedMoreLlamas();
  } on OutOfLlamasException {
    // A specific exception
    buyMoreLlamas();
  } on Exception catch (e) {
    // Anything else that is an exception
    print('Unknown exception: $e');
  } catch (e, s) {
    // s - stacktrace
    // No specified type, handles all
    print('Something really unknown: $e');
    print('Trace: $s');
}

```

You can use either `on` or `catch` or both. 
 - Use `on` when you need to specify the exception type. 
 - Use `catch` when your exception handler needs the exception object.

### Partially Handling Exceptions

To partially handle an exception, while allowing it to propagate, use the rethrow keyword.

```dart

  void misbehave() {
    try {
      dynamic foo = true;
      print(foo++); // Runtime error
    } catch (e) {
      print('misbehave() partially handled ${e.runtimeType}.');
      rethrow; // Allow callers to see the exception.
    }
  }

  void main() {
    try {
      misbehave();
    } catch (e) {
      print('main() finished handling ${e.runtimeType}.');
    }
  }

```

## 3. Finally Keyword

To ensure that some code runs whether or not an exception is thrown, use a finally clause. If no catch clause matches the exception, the exception is propagated after the finally clause runs:

```dart
    try {
      breedMoreLlamas();
    } catch (e) {
      print('Error: $e'); // Handle the exception first.
    } finally {
      cleanLlamaStalls(); // Then clean up.
    }
```