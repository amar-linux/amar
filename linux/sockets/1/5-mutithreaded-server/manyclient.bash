#!/bin/bash

for N in {1..50}
do
    ruby client.rb 1 &

done
wait

