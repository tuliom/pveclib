/*
 Copyright (c) [2018] IBM Corporation.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 arith128_test_f32.h

 Contributors:
      IBM Corporation, Steven Munroe
      Created on: Jul 3, 2018
 */

#ifndef TESTSUITE_ARITH128_TEST_F32_H_
#define TESTSUITE_ARITH128_TEST_F32_H_

extern int
test_vec_f32 (void);

#define MN 64

extern float matrix_f32 [MN][MN];

extern void
test_f32_Imatrix_init (float * array);

extern int
test_f32_Imatrix_check (float * array);

extern void
test_f32_matrix_transpose (float * tm, float * m);

extern void
test_f32_matrix_gather_transpose (float * tm, float * m);

extern void
test_f32_matrix_gatherx2_transpose (float * tm, float * m);

extern void
test_f32_matrix_gatherx4_transpose (float * tm, float * m);

#endif /* TESTSUITE_ARITH128_TEST_F32_H_ */
