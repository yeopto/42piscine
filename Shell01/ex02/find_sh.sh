#!/bin/sh
find . -name "*.sh" -type f | tr -d '/' | cut -d "." -f 2
