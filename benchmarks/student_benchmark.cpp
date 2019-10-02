#include "benchmark/benchmark.h"
#include "Student.h"


static void BM_Student_Check(benchmark::State &state) {
    double percent;
  while (state.KeepRunning()) {
      Student s1("Joe",40,50);
      percent=s1.cal_percentage(false);

    }
}

// Register the function as a benchmark
BENCHMARK(BM_Student_Check)->Arg(0);

BENCHMARK_MAIN();
