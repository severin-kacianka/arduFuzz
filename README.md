# ArduFuzz

This should build a blink file for arduino without the IDE
 the compilation now is a bit tricky it goes a bit like this:
1. compile the core arduino library
1. compile the main.cpp
1. compile the variant, which is as far as I know just a library for the specific board
1. link everything together
1. create the binary 

# Uploading the binary
Very important: to upload a binary we first need to push the reset button twice!
Otherwise the upload will fail. 
see: https://forum.arduino.cc/t/no-device-found-on-ttyacm0-both-with-arduino-ide-2-0-3-and-arduino-iot-cloud/1062050
