#include "stdafx.h"
#include "Project.h"

Project::Project()
  : mModified(false)
{
}

void Project::SetModified()
{
  mModified = true;
}

bool Project::IsModified()
{
  return mModified;
}

bool Project::Load(const wstring & aFilePath)
{
  // XXX
  return true;
}

bool Project::Save()
{
  // XXX
  return true;
}

bool Project::Save(const wstring & aFilePath)
{
  // XXX
  return true;
}