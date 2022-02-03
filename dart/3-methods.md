https://api.dart.dev


# List Methods

| Method | What it does? |
|-----| -----|
| clear() | clears the list. |
| join([String separator=""])|  converts each element to a String and concatenates the string.|
| add(E value) | adds an element to the end of the list |
| insert(int index, E value)| Inserts value at given index.  |
| remove(Object? value) |removes first occurence of value in the list. |
| removeAt(int index)| removes object at position index. |
| removeRange(int start, int end) | removes range of objects from the list. | 

<br/>

| | |
| --- | --- |
| asMap() | gives unmodifiable map-view of the list |
| toSet() | creates a Set of the following Iterable |
| toString() | creates String representation of the object. |

<br/>

| | |
| --- | --- |
| elementAt(int index) | returns the indexed element |
| contains(Object? ele) | checks whether or not the list contains element equal to ele. returns `true` or `false` |
| every(bool test(E element)) | checks if every element specifies the test |
| any(bool test(E element)) | checks if any element of the iterable specifies test. |

<br/>

| | |
| ----- | ----- |
| shuffle() | randomly shuffles elements of the list |
| sort([int compare(E a, E b)?]) | sorts list as per order specified by compare function |

<br />

| | |
| ----- | ----- |
| forEach(void f(E element)) | applies function f to each element in this list.|
| map<T>(T f(E e))| returns an list of elements created by calling F on each elemnts of this list.|
| reduce(E combine(E value, E element))| reduces a list to a single value, by iteratively combining the elements using the provided function. |
| fold<T>(T initalValue, T combine(T previousValue, E element)) | reduced the list to single value by iteratively combining each value with an existing value.  
| where(bool test(E element))| returns a new lazy iterable satisfying the predicate test. |
| whereType<T>()| returns iterable with all elements of type T. |
| skipWhile(bool test(E value)) | returns an iterable that skips leading element while test is satisfied. |

<br />

| | |
| ----- | ----- |
| sublist(int start, [int? end]) | returns a new list containing elements b/w start & end.|
| take(int count) | returns a lazy iterable of the count first elements |
| skip(int count) | returns a lazy iterable that provides all but the first count elements. |
| getRange(int start, int end)| an iterable that iterate over a range of elements. | 

<br/> 

| | |
| ---- | ----|
| indexOf(E element, [int start=0])| first index of element in the list |
| indexWhere(bool test(E element), [int start=0])| first index that satisfies test() |
| lastIndexOf | last index of element in the list. |
| lastIndexWhere() | similar to indexWhere() |


<br/>
## Miscellaneous

1. [Don't use `const` redundantly.](https://dart.dev/guides/language/effective-dart/usage#dont-use-const-redundantly)

2.
