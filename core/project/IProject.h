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

  /**
   * Load a project from file.
   */
  virtual bool Load(const wstring & aFilePath) = 0;

  /**
   * Save project to file.
   */
  virtual bool Save() = 0;
  virtual bool Save(const wstring & aFilePath) = 0;
};