AMREX_HOME ?= ../amrex

DEBUG	= FALSE

DIM	= 3

COMP    = gcc

USE_MPI   = FALSE
USE_OMP   = FALSE
USE_CUDA  = FALSE
USE_HIP   = TRUE
USE_SYCL  = FALSE

BL_NO_FORT = TRUE

TINY_PROFILE = FALSE

include $(AMREX_HOME)/Tools/GNUMake/Make.defs

CEXE_sources += main.cpp
include $(AMREX_HOME)/Src/Base/Make.package
include $(AMREX_HOME)/Tools/GNUMake/Make.rules
