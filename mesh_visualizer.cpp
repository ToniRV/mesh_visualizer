#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/viz/vizcore.hpp>
#include <opencv2/highgui/highgui.hpp>

class MeshVisualizer {
  public:
    MeshVisualizer (const std::string& path) {
      cv::viz::Viz3d myWindow;
      cv::viz::WMesh mesh = cv::viz::Mesh::load(path);
      myWindow.showWidget("point cloud map", mesh); // plot mesh
      myWindow.spin();
    }
};

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Please enter the path where the ply file is." << std::endl;
  }

  MeshVisualizer mesh_viz (argv[1]);
  return 0;
}
