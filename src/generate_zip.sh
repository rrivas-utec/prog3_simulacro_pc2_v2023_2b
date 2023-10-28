#!/usr/bin/env bash

project_name='prog3_simulacro_pc2_v2023_2b'
source_code='
    join_containers.h
    parallel_variant.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}