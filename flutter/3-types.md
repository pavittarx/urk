# Enums in Dart

| Type    | Accepted Values      |
| ----    | -----                |
| Colors  | red,  red[400]       |
| Axis    | horizontal, vertical |
| CrossAxisAlignment|  start, end, center, stretch, baseline   |
| MainAxisAlignment| start, end, center, spaceAround, spaceBetween, spaceEvenly |
| MainAxisSize | min, max |
| TextDirection | ltr, rtl |
| TextBaseline | alphabetic, ideographic |
| Vertical Direction | up, down |
| Clip | none, antiAlias, hardEdge, antiAliasWithSaveLayer |


## Classes

1. [Color](###Color)
2. BoxConstraints

<br/><br/>

### Color

<br/>

```dart
  Color c = const Color(0xFF42A5F5);
  Color c = const Color.fromARGB(0xFF, 0x42, 0xA5, 0xF5);
  Color c = const Color.fromARGB(255, 66, 165, 245);
  Color c = const Color.fromRGBO(66, 165, 245, 1.0);

  Color c1 = const Color(0xFFFFFF); // fully transparent white (invisible)
  Color c2 = const Color(0xFFFFFFFF); // fully opaque white (visible)

```

### Edge Insets

```dart

  const EdgeInsets.all(8.0);

  const EdgeInsets.symmetric(vertical: 8.0);

  const EdgeInsets.only(left: 40.0);

```

Constructors 

- .all(double value)
- .fromLTRB(double left, double top, double right, double bottom)

<br/>

- .only({double left, double top, double right, double bottom})
- .symmetric({double vertical = 0.0, double horizontal = 0.0})

<br/>

- .fromWindowPadding(WindowPadding padding, double devicePixelRatio)

### Box Constraints

- BoxConstraints({double minWidth, double maxWidth, double minHeight, double maxHeight})

- .expand({double? width, double? height})

- .loose(Size size)

- .tight(Size size)

- .tightFor({double? width, double? height})

- .tightForFinite({double width = double.infinity, double height = double.infinity})

