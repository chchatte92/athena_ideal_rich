#include "DD4hep/DetFactoryHelper.h"
#include "DD4hep/Printout.h"
#include "DDRec/Surface.h"
#include "DDRec/DetectorData.h"

using namespace std;
using namespace dd4hep;
using namespace dd4hep::rec;

static Ref_t create_detector(Detector& detector, xml_h xml_handle, SensitiveDetector sensitive)
{
  DetElement  sdet("athena_ideal_rich", 0);
  return sdet;
}
DECLARE_DETELEMENT(athena_ideal_rich, create_detector)
