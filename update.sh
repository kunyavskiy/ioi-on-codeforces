#!/bin/bash

for i in * ; do 
  [ -d $i ] || continue 
  pushd $i 
  polygon-cli update
  popd 
done
