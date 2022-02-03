# Gradle Build Tool
Gradle is the build tool for devlopment on android platform

- <project-root>/android/gradle/

## Commands

```shell
# Cleans up gradle build
  ./gradlew clean

# Build from Cache
 ./gradlew build

# Make a clean build
  ./gradlew clean build

# Stop running Daemons
  ./gradlew --stop
```

<br/>

## Using pub.dev package Manager

- The list of packages is store in `pubspec.yaml`file
- The `pubspec.lock` file contains the list of  stores the list of installed versions, to counter versioning conflicts between packages. 

```shell
# Install packages present in pubspec.yaml
  - flutter pub get (or)
  - dart pub get

# Upgrade all dependencies
  - flutter pub upgrade (or)
  - dart pub upgrade

# Upgrade specific package
  - flutter pub upgrade <package-name>
```

#### Managing Package Conflicts
Package conflicts may arise if two packages are using a different versions of the same package. This can be easily be resolved using ranged versioning. 

```yaml
  name: flutter_app
  dependencies: 
    url_launcher: '5.4.0' #  only version 5.4.0 is acceptable   
    collection: '^5.4.0'  # anything >= 5.4.0 but < 6.0.0 
    url_launcher: '>=5.4.0 <6.0.0' # specifies, a minimum and maximum version
```