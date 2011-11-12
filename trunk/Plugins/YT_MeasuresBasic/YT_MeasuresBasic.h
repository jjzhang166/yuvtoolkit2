#ifndef MEASURESBASIC_H
#define MEASURESBASIC_H

#include "../YT_Interface.h"

class MeasuresBasic : public QObject, public Measure
{
	Q_OBJECT;

	double ComputeMSE(FramePtr input1, FramePtr input2, FramePtr output, int plane);

	QList<MeasureCapability> m_Capabilities;
public:
	MeasuresBasic();
	~MeasuresBasic();

	virtual const QList<MeasureCapability>& GetCapabilities();
	virtual void Process(FramePtr source1, FramePtr source2, YUV_PLANE plane, const QList<MeasureOperation*>& operations);
};

#endif // MEASURESBASIC_H