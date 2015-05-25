#include <boost/python.hpp>
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>
#include <vector>
#include "../DiskVectorLMDB.hpp"

typedef std::vector<float> FeatureVector;

BOOST_PYTHON_MODULE(PyDiskVectorLMDB)
{
  using namespace boost::python;
  class_<FeatureVector>("FeatureVector")
    .def(vector_indexing_suite<FeatureVector>());
  
}

