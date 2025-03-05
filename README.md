This should build a blink file for arduino without the IDE
 the compilation now is a bit tricky it goes a bit like this:
# compile the core arduino library
# compile the main.cpp
# compile the variant, which is as far as I know just a library for the
# specific board
# link everything together
# create the binary 


Very important: to upload a binary we first need to push the reset button twice!
Otherwise the upload will fail. 
see: https://forum.arduino.cc/t/no-device-found-on-ttyacm0-both-with-arduino-ide-2-0-3-and-arduino-iot-cloud/1062050
