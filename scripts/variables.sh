#!/bin/bash
myVar="Hello there"
echo $myVar
echo "$myVar"
echo '$myVar'
echo \$myVar

echo Enter some text
read myVar

echo 'myVar' now equals $myVar
exit 0
