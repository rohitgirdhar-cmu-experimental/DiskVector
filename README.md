
Usage
-----
Tested for use to store `vector<float>` on disk. Simply refer to `main.cpp`
and `read.cpp` to quickly get started.

Updates
-------
- Moved to [LMDB](http://symas.com/mdb/) as the datastore backend
  (`DiskVectorLMDB` class)
  - Primarily because it is optimized for reads as compared to writes,
  and this package is developed to write the data once and then read multiple
  times. (A complete benchmark
  comparing LMDB, leveldb etc is [here](http://symas.com/mdb/microbench/)).
  - Code using the `leveldb` backend is still available through the `DiskVector` class.

Note
-----

- `DiskVectorLMDB` allows for update to the model. It does not support duplicate
keys, so, if you add another value with a key that already existed, it'll simply
overwrite it (**without warning**).
Also, it will not store the old values of the features, so no extra space will be used.
