/**
 * Non-metric Space Library
 *
 * Authors: Bilegsaikhan Naidan (https://github.com/bileg), Leonid Boytsov (http://boytsov.info).
 * With contributions from Lawrence Cayton (http://lcayton.com/).
 *
 * For the complete list of contributors and further details see:
 * https://github.com/searchivarius/NonMetricSpaceLib 
 * 
 * Copyright (c) 2010--2013
 *
 * This code is released under the
 * Apache License Version 2.0 http://www.apache.org/licenses/.
 *
 */

#ifndef _SPACE_SCALAR_H_
#define _SPACE_SCALAR_H_

#include <string>
#include <limits>
#include <map>
#include <stdexcept>

#include <string.h>
#include "global.h"
#include "object.h"
#include "utils.h"
#include "space.h"
#include "space_vector.h"
#include "distcomp.h"


#define SPACE_COSINE_SIMILARITY  "cosinesimil"
#define SPACE_ANGULAR_DISTANCE   "angulardist"

namespace similarity {

template <typename dist_t>
class SpaceCosineSimilarity : public VectorSpace<dist_t> {
public:
  virtual std::string ToString() const {
    return "CosineSimilarity";
  }
protected:
  virtual dist_t HiddenDistance(const Object* obj1, const Object* obj2) const;
};

template <typename dist_t>
class SpaceAngularDistance : public VectorSpace<dist_t> {
public:
  virtual std::string ToString() const {
    return "AngularDistance";
  }
protected:
  virtual dist_t HiddenDistance(const Object* obj1, const Object* obj2) const;
};


}  // namespace similarity

#endif 