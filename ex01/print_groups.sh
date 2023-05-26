#!/bin/sh
groups $FT_USER | tr " " "," | cut -d ',' -f 3-
