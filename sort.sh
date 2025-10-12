#!/bin/zsh
# List directories in ascending order
dirs=(*(/))
print -l ${(o)dirs}
