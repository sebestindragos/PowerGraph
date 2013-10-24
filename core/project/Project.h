#pragma once

#include "IProject.h"

/**
 * Class implementing the IProject interface.
 *
 * @author Sebestin Dragos
 */

class Project: public IProject
{
public:
//----------------------------------------------------------------------------
  // Class c-tors.
  Project();

//----------------------------------------------------------------------------
  // Implementation of IProject interface members.
  void SetModified();
  
  bool IsModified();

  bool Load(const wstring & aFilePath);

  bool Save();

  bool Save(const wstring & aFilePath);
    
private:

  bool mModified;
};