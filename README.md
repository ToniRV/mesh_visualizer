# Mesh visualizer

Simply allow to import a ply file and visualize the mesh.

## Installation
You need OpenCV.
```
git clone git@github.com:ToniRV/mesh_visualizer.git
cd mesh_visualizer
mkdir build
cd build
cmake ..
make -j8
```

## Usage
Move to the build folder, and use the executable therein:
```
./mesh_visualizer ../output_mesh.ply
```

Or more generally:
```
./mesh_visualizer path_to_ply_file_of_the_mesh
```

Alternatively, use the matlab function in the matlab folder, but I do not like very much the user interface of matlab to visualize the mesh...

Last, but not least, you can use MeshLab to visualize the mesh.


