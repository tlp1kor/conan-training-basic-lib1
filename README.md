# Conan Training - Basic
## Microservice Project - Lib1 (Addition)

Contains a feature for microservice calculator application.
It has Addition feature which is compiled in form of a static library. The library and header is then being shared to another consumer which integrates this feature into an application.
For this `main` branch content, the consumer is [Calculator_Application](https://github.com/tlp1kor/conan-training-basic/tree/chapter_2_microservice_project). So make sure to build this current application before building the Calculator_Application.

This `main` branch creates package: `addition_lib/1.0`

The application is built with Conan which in background will use CMake in this case.
To build the application please run the following command:
```
./build.sh
```
