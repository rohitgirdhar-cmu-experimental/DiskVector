#include "DiskVectorLMDB.hpp"
#include <iostream>
#include <fstream>
#include <boost/filesystem.hpp>

using namespace std;
namespace fs = boost::filesystem;

void readAndPrint() {
  DiskVectorLMDB<vector<float>> d("selsearch_feats", 1);
  vector<float> temp;
  d.Get(1, temp);
  cout << temp.size() << endl;
  for (int i = 0; i < temp.size(); i++) {
    cout << temp[i] << " ";
  }
}

int main() {
  readAndPrint();
  return 0;
}

