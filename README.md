# Mesh visualizer

Simply allow to import a ply file and visualize the mesh.

## Installation
You need OpenCV.
git clone this repo.
mkdir build
cd build
cmake ..
make -j8

## Usage
./mesh_visualizer path_to_ply_file_of_the_mesh

For example, 

./mesh_visualizer ../output_mesh.ply

Alternatively, use the matlab function in the matlab folder, but I do not like very much the user interface of matlab to visualize the mesh...


