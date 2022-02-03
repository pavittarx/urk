# Scope in Dart

Dart is lexically scoped language. You can follow "curly braces outwards" to see if the braces are in scope. 

```dart
  var a = 10;

  void main() {
    var b = 50;

    void run(){
      var c = 100;

      print(a);
      print(b);
      print(c);
    }

  }

```

## Lexical Closures

A closure is a function object that has access to variables in its lexical scope, even when the function is used outside of its original scope.

```dart
    Function addBy(int x){
      return (y) => x + y;
    }

    void main(){
      var addTo5 = addBy(5);
    
      print(addTo5(10));
      print(addTo5(7));
    }

```

# Operators in Dart

| Type | Operators|
| ----- | ------ |
|  Arithmetic | +, -, *, /, %, ~/        |
|  Relational |  ==, !=, >=, >, <=, <    |
|  Type test  | as, is, is!              |
|  Logical    | !expr, &&, \|\|                 |
|  Null       | ?? (if null)             |
|  Ternary    | expr ? true : false      |
|  Cascade    | .. , ?..                 |
|  Postfix / Prefix | x++,x--,  ++x, --x |


## Relational Operator 

<br />

```dart

  assert(2 == 2);
  assert(2 != 3);
  assert(3 > 2);
  assert(2 < 3);
  assert(3 >= 3);
  assert(2 <= 3);

```

- In the rare case where you need to know whether two objects are the exact same object, use the `identical()` function instead

## Type test Operators

- `as` is used to cast an object to a particular type. 

```dart
  (employee as Person).firstName = 'Bob';
```

- `is` is used to check the type of the Object. 

```dart
  if (employee is Person) {
    // Type check
    employee.firstName = 'Bob'; 
  }
```

## Other Operators 

| Operator	| Name |	Meaning |
| ----  | ----- | ----- |
| () |	Function application |	Represents a function call |
| [] |	List access |	Refers to the value at the specified index in the list |
| . |	Member access	| Refers to a property of an expression; example: foo.bar selects property bar from expression foo |
| ?. |	Conditional member access |	Like ., but the leftmost operand can be null; example: foo?.bar selects property bar from expression foo unless foo is null (in which case the value of foo?.bar is null) |