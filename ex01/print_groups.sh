#!/bin/sh
export FT_USER
groups $FT_USER | tr ' ' ',' | tr -d '\n'
