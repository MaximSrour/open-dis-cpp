#pragma once

#include <dis7/utils/DataStream.h>
#include <dis7/opendis7_export.h>


namespace DIS
{
// Contains electromagnetic emmission regeneration parameters that are variable throught a scenario. Section 6.2.22.

// Copyright (c) 2007-2009, MOVES Institute, Naval Postgraduate School. All rights reserved. 
//
// @author DMcG, jkg

class OPENDIS7_EXPORT EEFundamentalParameterData
{
protected:
  /** center frequency of the emission in hertz. */
  float _frequency; 

  /** Bandwidth of the frequencies corresponding to the fequency field. */
  float _frequencyRange; 

  /** Effective radiated power for the emission in DdBm. For a radar noise jammer, indicates the peak of the transmitted power. */
  float _effectiveRadiatedPower; 

  /** Average repetition frequency of the emission in hertz. */
  float _pulseRepetitionFrequency; 

  /** Average pulse width  of the emission in microseconds. */
  float _pulseWidth; 


 public:
    EEFundamentalParameterData();
    virtual ~EEFundamentalParameterData();

    virtual void marshal(DataStream& dataStream) const;
    virtual void unmarshal(DataStream& dataStream);

    float getFrequency() const; 
    void setFrequency(float pX); 

    float getFrequencyRange() const; 
    void setFrequencyRange(float pX); 

    float getEffectiveRadiatedPower() const; 
    void setEffectiveRadiatedPower(float pX); 

    float getPulseRepetitionFrequency() const; 
    void setPulseRepetitionFrequency(float pX); 

    float getPulseWidth() const; 
    void setPulseWidth(float pX); 


virtual int getMarshalledSize() const;

     bool operator  ==(const EEFundamentalParameterData& rhs) const;
};
}

// Copyright (c) 1995-2009 held by the author(s).  All rights reserved.
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
//  are met:
// 
//  * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// * Neither the names of the Naval Postgraduate School (NPS)
//  Modeling Virtual Environments and Simulation (MOVES) Institute
// (http://www.nps.edu and http://www.MovesInstitute.org)
// nor the names of its contributors may be used to endorse or
//  promote products derived from this software without specific
// prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// AS IS AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
// ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
