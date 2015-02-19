#include "DiskVectorLMDB.hpp"
#include <iostream>
#include <fstream>
#include <boost/filesystem.hpp>

using namespace std;
namespace fs = boost::filesystem;

void readAndPrint() {
  DiskVectorLMDB<vector<float>> d("/srv2/rgirdhar/Work/Datasets/processed/0001_PALn1KDistractor/features/CNN_pool5_uni_normed_LMDB", 1);
  vector<float> temp;
  d.Get(1000999, temp);
  cout << temp.size() << endl;
  for (int i = 0; i < temp.size(); i++) {
    cout << temp[i] << " ";
  }
}

int main() {
  readAndPrint();
  return 0;
}

