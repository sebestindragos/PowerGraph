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