#!/bin/bash

# Create directories if they don't exist
mkdir -p c_files python_files

# Move C files
mv *.c c_files/ 2>/dev/null

# Move Python files
mv *.py python_files/ 2>/dev/null

echo "Separation completed successfully."

