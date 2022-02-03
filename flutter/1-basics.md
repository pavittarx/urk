# Flutter 
Flutter is a cross-platform UI framework written on top of Dart Programming Language.

- The file `lib/main.dart` act as the entry filte for a flutter app. 

- The function `main()` act as a starting point for a Dart app. 


```dart
  // main() function in Dart.

  void main(){
    print('Hello World');
  }
```

```dart
  import 'package:flutter/material.dart';

  // main() function in Flutter
  
  void main(){
    runApp(MaterialApp(home: Text("Hello World")));
  }
```

Everything in flutter is a `Widget`. Widgets are used to build the Ui of the app. 

The `MaterialApp` & `Text` are widgets in the above code.

<br/>

## Stateless and Stateful Widgets

