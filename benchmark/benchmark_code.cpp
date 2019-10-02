#include "benchmark/benchmark.h"
#include <iostream>
#include <vector>


static void BM_VectorInsert(benchmark::State &state) {
    std::cout<<state.range(0);
  while (state.KeepRunning()) {
    std::vector<int> insertion_test;

    for (int i = 0, i_end = state.range(0); i < i_end; i++) {
      insertion_test.push_back(i);

    }
  }
}

// Register the function as a benchmark
BENCHMARK(BM_VectorInsert)->Range(8, 8 << 10);

BENCHMARK_MAIN();
