#ifndef __GUAMPS_SELECT_H__
#define __GUAMPS_SELECT_H__

#include "data.h"

typedef enum {
  NATOMS, POSITIONS, VELOCITIES,
  FORCES, LAMBDA, BOX, STEP, TIME,
  SEED, NSTLOG, NSTXOUT, NSTVOUT, NSTFOUT,
  NSTEPS, LD_SEED,
  selector_t_LAST
} selector_t;
static const int selector_t_count = selector_t_LAST;

static const char *GUAMPS_SELECTOR_NAMES[] =
  {[NATOMS]="NATOMS", [POSITIONS]="POSITIONS", [VELOCITIES]="VELOCITIES",
   [FORCES]="FORCES", [LAMBDA]="LAMBDA", [BOX]="BOX", [STEP]="STEP", [TIME]="TIME",
   [SEED]="SEED", [NSTLOG]="NSTLOG", [NSTXOUT]="NSTXOUT", [NSTVOUT]="NSTVOUT", [NSTFOUT]="NSTFOUT",
   [NSTEPS]="NSTEPS", [LD_SEED]="LD_SEED",
  };

static const type_t GUAMPS_SELECTOR_TYPES[] =
  {[NATOMS]=INT_T,  [POSITIONS]=RVEC_T, [VELOCITIES]=RVEC_T,
   [FORCES]=RVEC_T, [LAMBDA]=INT_T, [BOX]=RVEC_T, [STEP]=INT_T, [TIME]=DOUBLE_T,
   [SEED]=INT_T, [NSTLOG]=LLINT_T, [NSTXOUT]=LLINT_T, [NSTVOUT]=LLINT_T, [NSTFOUT]=LLINT_T,
   [NSTEPS]=LLINT_T, [LD_SEED]=INT_T,
  };

#endif
