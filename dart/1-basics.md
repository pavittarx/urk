# Dart Basics

```dart

// Single Line Comment

```

<br />
<br />

## Printing Values

These methods only print limited amount of output.

```dart
  print(variable);
```

```
  debugPrint(variable);
```

Other option:

```dart

import 'dart:developer' as developer;

void main() {
  developer.log('log me', name: 'my.app.category');

  developer.log('log me 1', name: 'my.other.category');
  developer.log('log me 2', name: 'my.other.category');
}

```

<br/>
<br/>

## main()

A special top-level function where the app execution starts. 

Location `/lib/main.dart`

```dart

  void main(){
    print("Hello World!");
  }

```

[Read more here...](https://dart.dev/guides/language/language-tour#the-main-function)

<br/>
<br/>

## Everything you place in a variable is an `Object` in Dart

1. Every object is an instance of a class.
2. Numbers, functions, and null are objects.
3. If you enable `null-safety`, all objects except `null` inherits from the `Object` class.

<br/>

## Types Annotations are optional. 

Dart can infer types.

<br/>

## With null-safety enabled, variables can't contain `null` unless you say they can.

```dart
    int y? = null;  
```

## Functions in Dart 

1. Dart supports top-level functions. Ex. `main()`

2. Dart also supports functions tied to a class or an object. (static & instance variables)

3. Dart also supports functions within functions. (nested / local functions)/


## Private Variables

Variables private to its library are decalared with leading underscore (_).

<br/>

## Dart has both `expressions` & `statements`.

Expressions have runtime values. Ex. conditional Expression

```dart 

   condition? expr1 : expr2;
```

Statement do not have runtime values. 

```dart 
   if(){

   }else{
     
   } 
```

