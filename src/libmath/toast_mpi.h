#ifndef __TOASTMPI_H
#define __TOASTMPI_H

#include <mpi.h>
#include "toastdef.h"

class TMPI {
public:
    TMPI() {}
    static int Rank();
    static int Size();
    template<class T> static MPI_Datatype MPIType ();

private:
    static int rank;
    static int size;
};

#endif // !__TOASTMPI_H
