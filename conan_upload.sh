#!/bin/bash

remote="conan-demo-local"

# Upload conan package to artifactory
conan upload addition_lib/2.0 -r $remote