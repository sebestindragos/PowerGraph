#pragma once

#include "project/Project.h"

/**
 * Class implementing the application context. It will hold all information
 * about the state of the app.
 *
 * @author Sebestin Dragos
 */

class Context
{
public:

  /**
   * Class constructors.
   */
  Context();
  Context(wstring aProjectFilePath);

private:

  Project mProject;
};