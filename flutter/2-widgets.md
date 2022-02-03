# Widgets

## 1. Text

```dart
  
  Text(
    'Hello, $_name! How are you?',
    
    textAlign: TextAlign.center,
    overflow: TextOverflow.ellipsis,
    style: const TextStyle(fontWeight: FontWeight.bold),
)

```

| Property  | Options |
| ---- | --- |
| textAlign |  TextAlign.left, center, right, justify, start, end, values|
| textDirection | TextDirection.ltr, rtl | 
| overflow | TextOverflow.clip, ellipsis, fade, visible |
| style | See [TextStyle](https://api.flutter.dev/flutter/painting/TextStyle-class.html) |

<br />

## 2. Container

Video: https://www.youtube.com/embed/c1xLMaTUWCY?start=6

Doc: https://api.flutter.dev/flutter/widgets/Container-class.html



```dart

  // Example 1

  Container(
    margin: const EdgeInsets.all(10.0),
    padding: const EdgeInsets.all(8.0),
    color: Colors.amber[600],
    width: 48.0,
    height: 48.0,

    alignment: Alignment.center,
    child: Text("Hello World")
  ),

  // Example 2

  Container(
  constraints: BoxConstraints.expand(
    height: Theme.of(context).textTheme.headline4!.fontSize! * 1.1 + 200.0,
    ),
    padding: const EdgeInsets.all(8.0),
    child: Text("Hello World"),
    transform: Matrix4.rotationZ(0.1),
  )
```

| | |
| --- | --- | 
| alignment | align the child within the container. |
| color | color the paint behind the child 
| constraints | additional constraints to be applied to the child. |
| transform | [Matrix4?](https://api.flutter.dev/flutter/vector_math_64/Matrix4-class.html) transformational matrix to apply before paint |


## 3. Row Widget 

```dart
  Row(children: [
    Text("Hello!"),
    Text("This is John Doe for you."),
    Text("Thanks!")
  ])

  Row(
    textDirection: TextDirection.rtl,
    children: []
    direction: Axis.horizontal,
    mainAxisAlignment: MainAxisAlignment.center,
    mainAxisSize: MainAxisSize.max,
    crossAxisAlignment: CrossAxisAlignment.center,
    textBaseline: TextBaseline.alphabetic,
    textDirection: TextDirection.ltr,

  )
```

| | | 
| ---- | ---- |
| mainAxisAlignment| how the children should be placed in the main axis.
| mainAxisSize | how much space should be occpied on the main axis| 
| crossAxisAlignment | how the children should be placed along the cross axis | 
| direction | the direction to use as the main axis |
| | | 

<br/>

