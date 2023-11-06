#pragma once

#include "Employee.h"

class Table;

/*! \class Floor
*    \brief  A Floor class.
*    \details   This class represents a floor in a restaurant. It contains a list of tables and a MaitreD.
*    \author Alcodeholics Anonymous
*/
class Floor {
   private:
    Table* head; ///< A pointer to the first table in the list of tables.
    Employee MaitreD; ///< The MaitreD of the floor.

   public:
    /*! \fn add
    *   \brief Adds a table to the list of tables.
    *   \param table A pointer to the table to be added.
    */
    void add(Table* table);
    /*! \fn remove
    *   \brief Removes a table from the list of tables.
    *   \param table A pointer to the table to be removed.
    *   \return A pointer to the removed table.
    */
    Table* remove(Table* table);
    /*! \fn combine
    *   \brief Combines two tables.
    *   \param table1 A pointer to the first table to be combined.
    *   \param table2 A pointer to the second table to be combined.
    *   \return True if the tables were combined successfully, false otherwise.
    */
    bool combine(Table* table1, Table* table2);
    /*! \fn split
    *   \brief Splits a table into two.
    *   \param table A pointer to the table to be split.
    *   \return True if the table was split successfully, false otherwise.
    */
    bool split(Table* table);
    /*! \fn detach
    *   \brief Detaches a table from an employee.
    *   \param table A pointer to the table to be detached.
    */
    void detach(Table* table);
    /*! \fn attach
    *   \brief Assigns a waiter to a table.
    *   \param employee A pointer to the employee to be attached to.
    *   \param table A pointer to the table to be attached.
    */
    void attach(Employee* employee, Table* table);
    /*! \fn Floor
    *   \brief A constructor.
    */
    Floor();
    /*! \fn ~Floor
    *   \brief A destructor.
    */
    ~Floor();
};