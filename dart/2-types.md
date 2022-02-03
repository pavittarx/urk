# Variables in Dart

1. Variables store references in Dart.

2. If you enable `null-safety`, all objects except `null` inherits from the `Object` class.

Declare a variable w/o specifying its type.

```dart
  var x = 10;
```

The type of this variable is determined from the value assigned.

Dart will replace the var keyword with the initializer type, or leaving it dynamic by default if there is no initializer.

3. Dart supports top-level variables, as well as variables tied to a class or object (static and instance variables). Instance variables are sometimes known as fields or properties.

4. Dart doesn't have keywords, `public`, `private` and `protected`. If an identifier starts with an underscore (\_), it’s private to its library.

## Keywords in Dart

The following keywords are used to declare of define the behavior of variables. They do not specify a type.

| Keyword | Description                                                                                                                                                      |
| ------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| var     | used to declare a variable w/o specifying its type. It does not allow to change the type of the variable once assigned, but only value of the variable.          |
| dynamic | a type underlying all dart objects. Not needed explicitly in most cases. It allows to change both the type & value of the variable.                              |
| Object  | used to decalare variabled when an object isn't restricted to a single type. (same as dynamic). If you want to defer type checking until runtime, use `dynamic`. |

```dart

  var x = 10;

  x = 20; // allowed
  x = "Hello"; // not-allowed
```

```dart
  dynamic age = 56;

  age = "Twenty"; // allowed
  age = 100; // allowed
  age = null; // not-allowed.
```

```dart
  Object name = "Harry";
```

If you want to allow any type including `null`. Use

```dart
   Object? name;

```

<br/>

If you never intend to change a variable, use final or const, either instead of var or in addition to a type.

```dart
  final name = "Bob";
  name = "Marie"; // Error; final variable cam only be set once.

  const age = 50;
  age = 20; // not allowed

```

| Keyword | Description                                                                                                                                                                           |
| ------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| final   | when you expect the variable to remain the same during lifetime.                                                                                                                      |
| const   | Using const on an object, makes the object’s entire deep state strictly fixed at compile-time and that the object with this state will be considered frozen and completely immutable. |
| static  | It is used to create class level variables. If a const variable is at class level mark it as `static const`.                                                                          |

- Use const for variables that you want to be compile-time constants.

There lies a fine distinction between `final` & `const`. `final` does not necessarily make the object itself immutable, whereas `const` does:

```dart

// can add/remove from this list, but cannot assign a new list to fruit.
final fruit = ["apple", "pear", "orange"];
fruit.add("grape");

// cannot mutate the list or assign a new list to cars.
final cars = const ["Honda", "Toyota", "Ford"];

// const requires a constant assignment, whereas final will accept both:
const names = const ["John", "Jane", "Jack"];

```

## Null Safety & Default Values

<br/>

## Data Types

1. void

2. int, double, num

3. bool

4. String

5. List

6. Set

7. Map

8. Runes

9. Symbols

<br/>

### Numbers in Dart

<br/>

| Keyword | Description                                                                       |
| ------- | --------------------------------------------------------------------------------- |
| int     | used to declare integer values.                                                   |
| double  | 64-bit double-precision floating point numbers as specified by IEEE 754 standard. |
| num     | allows variable to have both int & double values                                  |

```dart
  // Integer Literals
  var x = 1;
  var hex = 0xDEADBEEF;
  var exponent = 8e5;

```

```dart
  // Double Literals
  var y = 1.1;
  var exponents = 1.42e5;

```

```dart
  num x = 1; // x can have both int and double values
  x += 2.5;

```

## Booleans in Dart

<br/>

- `bool` is type used to represent Boolean values in Dart.

- Only two objects have type bool: the boolean literals `true` and `false`.

- `true` and `false` are both compile-time constants.

- Dart’s type safety means that you can’t use code like `if(nonbooleanValue)` or `assert(nonbooleanValue)`. Instead you must explicitly check values like this:

```dart
  var name = '';
  assert(name.isEmpty);

  var age = 20;
  assert(age<=20);

  var utopia;
  assert(utopia == null);

  var oops = 0/0;
  assert(oops.isNaN);
```

## Strings in Dart

<br/>

In Dart, a String holds a sequence of UTF-16 code units.

- Strings in dart can be created using single or double quotes.

- Dart supports String Interpolation. In order to get the corresponding string, Dart calls object's `toString()` method.

```dart
    String s  = "World";

    // You can forego {} in string interpolation
    print("Hello $s.");

    print("Hello ${s.toUpperCase()}.");

```

```dart

  // String Concatenation works over multiple lines, without `+` operator.
  String s = 'Hello'
              ' '
              'World.';
  
  // String concatenation works with '+' operator as well.
  
  print(s);
  
  String w = s + ' Woah!!';
 
  print(w);

```

You can also create multi-line strings using triple single or double quotes. 

```dart

  String multiString = ''' 
              This is a 
              multi line 
              string.
        ''';

```

```dart 
  // Creates raw Strings

  String rawString = r'This is a raw string'; 
```
<br/>



## Lists (arrays) in Dart
In dart, arrays are List Objects.

```dart 
  // Dart infers the list has type List<int>, and dart analyzer raises errors, if you try to add non-integer values.
  var list = [1,2,3,4,5];

  // Strongly typed.
  List<int> l2= [1,2,3,4,5];

  // Length of the list
  print(list.length);

```

- The indexes in list are from 0 - list.length -1.

```dart
  // First Element
  print(list[0]);

  // Last Element 
  print(list[list.length -1]);
```

```dart
  // Create a complile time constant list. 

  var constList = const [1, 2, 3];

```

```dart
  // Use spread operator (...), to create new lists from existing lists.

  var l = [1,2,3];

  // Creates an exact copy of l.
  var l2 = [...l];

  // copies l and appends 4, 5, 6.
  var l3 = [...l, 4, 5, 6];

  // appends list l to existing list.
  var l4 = [0, ...l];

```

- If the expression to the right of the spread operator might be null, you can avoid exceptions by using a null-aware spread operator (...?).

```dart
  
  var list;
  // list is null, but doesn't raise exception.
  var list2 = [0, ...?list];

```

- Dart also supports `collection if` & `collection for`

```dart

  var nav = [
    'Home',
    'Furniture',
    'Plants',
    if (promoActive) 'Outlet' // collection-if
  ];
   
```

```dart
  var listOfInts = [1, 2, 3];
  var listOfStrings = [
    '#0',
    for (var i in listOfInts) '#$i' // collection-for
  ];
  
```

```dart
  // List Properties 

  var l = [1,2,3,4,5];

  print(list.isEmpty) // false
  print(list.length) // 5

  // an iterable of list in reverse-order
  list.reversed
```

## Map 
A map is an object that associates, keys & values.


```dart

  Map details = {
    'name': 'Stooart'

  }; // ending semi-colon is important

  // Dart infers type Map<String, String>

  var nobleGases = {
    2: 'helium',
    10: 'neon',
    18: 'argon',
  };

  // Dart infers type Map<int, String>

```

```dart
  // Using map constructor;

  var details = Map<String, String>();

  details['name'] = 'Strooart';

  // Read Values

  print(details['name']);

  // Get Length of Map

  print(details.length);

  // Create a map, that is compile time constant

  final constMap = const {
    'name' : 'Stooart'
  };

  constMap['name'] = "Bob"; // will cause error.

```

- Map supports spread operator `...` and `...?`
- Map also support collection if & collection for.

## Sets

A set in Dart, is unordered collection of unique items. 

```dart
  
  var names = { 'Tom', 'Harry', 'Bob', 'Randy', 'Juliet', 'Ashok', 'Ratan'}; 
  // Create an empty set

  var names = <String>();
  // var names = {} will create a map.
```
