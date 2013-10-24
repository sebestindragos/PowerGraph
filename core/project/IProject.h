#pragma once

/**
 * Class implementing a project interface.
 *
 * @author Sebestin Dragos
 */
class IProject
{
  /**
   * Mark the project as modified.
   */
  virtual void SetModified() = 0;

  /**
   * Check if the project was modified.
   */
  virtual bool IsModified() = 0;
};