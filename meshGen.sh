#!/bin/bash
# Auto sample

#of240

# Base blockMesh
echo "Creating mesh with BlockMesh"
blockMesh > log.01bm01

# Refine mesh by half-split in every direction (8x cells)
echo "Refining by spliting"
refineMesh -overwrite > log.02rm01

# Refine mesh by half-split in every direction (8x cells)
echo "Refining by spliting"
refineMesh -overwrite > log.03rm02

# Create double wall layer
echo "Creating wall layer"
refineWallLayer -overwrite "(nozzleWall nozzleWallext)" 0.4 > log.04rw01

echo "Done"
