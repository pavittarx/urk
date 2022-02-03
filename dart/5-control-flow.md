# Control Flow


## 1. `if` & `else`

```dart
  
  const x = 12;
  
  if(x == 15){
    print('X is 15');
  }else{
    print('X is not 15');
  }

  
  if(x == 15){
    print('X is 15');
  }else if(x < 15){
    print('X is less than 15');
  }else{
    print('x is greater than 15');
  }

```

## `for` Loops

```dart

    for(int i=0; i<10; i++){
      print("For Loop - $i");
    } 

```

## while & do-while

```dart
   int i = 0;

   while(i<10){ 
     print('While Loop - $i');
     i++;
   }

   do{
     print("Do While - $i");
   }while(i<10);

```

- Iterable classes also, do have `forEach()`.

## `break` & `continue`

- `break` statement is used to break a loop.
- `continue` statement is used to skip over an iteration of loop.


## Switch Statements

```dart

  var status = 'Open';

  switch(status){
    case 'Open' : print('The store is open.');
                  break;

    case 'Close': print('The store is closed');
                  break;

    default     : print('The store has been sold out.');

  }

```