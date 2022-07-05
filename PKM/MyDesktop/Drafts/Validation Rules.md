# Create Validation Rules
## Learning Objectives


- Describe two use cases for validation rules.
- List the elements of a validation rule.
- Create a validation rule.

## Introduction to Validation Rules
Validation rules verify that data entered by users in records meets the standards I specify before I can save it.
 A validation rule can contain **a formula** or **expression** that evaluates the data in one or more fields and _returns a value of **“True”** or **“False.”**_
> **==When the validation rule returns a value of "True", this confirms that the data entered by the user contains an _invalid value_.==**

Validation rules can also include error messages to display to users when they enter invalid values based on specified criteria. Using these rules effectively contributes to quality data. For example, you can ensure that all phone number fields contain a specified format or that discounts applied to certain products never exceed a defined percentage.

## Defining Validation Rules
I can create validation rules for **Objects**, **fields**, **campaign members**, or **case milestones**.

In the following steps, we create a validation rule that fires when a user tries to save an account with an account number of incorrect length.