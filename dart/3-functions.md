## Functions in Dart
Dart is true object-oriented language.

- Even functions have a type `Function`;

```dart

  bool func(int number){
    return number == 10;
  }

  // Functions still worl if you omit the types

  bool func(number){
    return number == 10;
  }

  // Shorthand Syntax for single line functions
  bool func(int number) => number == 10;

```

There are two types of Function Parameters in Dart. 

1. Positional Parameters 
2. Named Parameters

- A function can have any number of required positional parameters. These can be followed either by named parameters or by optional positional parameters (but not both).

- Some APIs — notably Flutter widget constructors — use only named parameters, even for parameters that are mandatory. See the next section for details.

<br/>

## Named Parameters

Named parameters are optional unless they’re specifically marked as required.

When defining a function, use `{param1, param2, …}` to specify named parameters:

- Notice the curly braces {} in the function header.

```dart 
  void run({String? name}){
    print("Hello $name!");
  } 
```

When calling a function, you can specify named parameters using `paramName: value`

```dart
  run(name: "Floyd");
```

Although the named parameters are optional, you can annotate them with the `required` keyword, to indicate that they are mandatory.

```dart
  void run({required String? name}){
    print("Hello $name!");
  }
```
## Optional Positional Parameters

Wrapping a set of function parameters in [] marks them as optional positional parameters:

```dart
  void run(String from, String to, [String? message]){
    print("$from said Hello to $to.");
    print("Message: $message");
}
```

Here. `message` is an optional parameter.

## Default Values

Use `=` to specify default values for both named or positional parameters.


```dart
  void runPositional(String from, String to, [String? message = "Hello"]){
    print("$from said Hello to $to.");
    print("Message: $message");
}
```

```dart
  void runNamed({String? name="John Doe"}){
    print("Hello $name!");
  }
```

- Lists / Maps are also accepted as default values. 

## Functions as First Class Objects

Functions can be passed as a parameter to another function. 

```dart

  var list = [2, 4, 6, 8];

  void printList(var item){
    print(item);
  }

  list.forEach(printList);
  
```

You can also assign a function to a variable, such as: 

```dart
  
  var list = [5, 10, 15, 20, 25, 27];

  var printList = (var item) => print(item);

  list.forEach(printList);

```

## Anonymous / Lambda Functions

```dart
  var list = [2,5,7,10,15,20];

  
  // Anonymous function is passed to forEach method
  list.forEach((item){
      print(item);
    });

  // Single Line Anonymous function

  list.forEach((item) => print(item));

  // Note that item is untyped here.
  // Also, you need `=>` when creating a single lined anonymous function
```
