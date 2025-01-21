#include <AMReX.H>
#include <AMReX_Gpu.H>
#include <optional>

int main (int argc, char* argv[])
{
    amrex::Initialize(argc, argv);
    {
        std::optional<double> opt;
        if (argc < 2) {
            opt = 3.14;
        }
        amrex::ParallelFor(1, [=] AMREX_GPU_DEVICE (int i)
        {
            if (opt) {
                AMREX_DEVICE_PRINTF("opt = %g\n", *opt);
            }
        });
    }
    amrex::Finalize();
}
