 #salesforce #formula #fields
 
# Use Formula Fields
Trailhead [page](https://trailhead.salesforce.com/content/learn/modules/point_click_business_logic/formula_fields)

## Learning Objectives

- Create a custom formula field and use the formula editor.
- Explain why formula fields are useful.
- Outline at least one use case for formula fields.
- Create simple formulas.

## Introduction to Formula Fields

You’ve got a lot of data in your organization. Your users need to access and understand this data at a glance without doing a bunch of calculations in their heads. Enter formula fields, the powerful tool that gives you control of how your data is displayed.

![[ba5cf1fc8e9f0ce66e39daa113c41028_formulas-comparison.webp]]

## Find the Formula Editor

You can create custom formula fields on any standard or custom object. To start, we’ll create a formula on the Opportunity object. Follow these steps to navigate to the formula editor.

1. From Setup, open the Object Manager and click Opportunity.
2. In the left sidebar, click Fields & Relationships.
3. Click New.
4. Select Formula and click Next.
5. In Field Label, type My Formula Field. Notice that Field Name populates automatically.
6. Select the type of data you expect your formula to return. For example, if you want to write a formula that calculates the commission a salesperson receives on a sale, you select Currency. For now, pick Text.
7. Click Next. You’ve arrived at the formula editor! Time for our tour.

## Use the Formula Editor
This image highlights the most important parts of the formula editor.
![[ac7438aa50b2fca88274cc760e10c29c_formulas-editor.webp]]

1. ==The formula editor comes in _two_ flavors:== **Simple** and **Advanced**. It’s tempting to use the Simple editor, but we always recommend using the Advanced editor. Advanced doesn’t mean more complicated. It means more tools for you to create powerful formulas.
2. The Insert Field button opens a menu that allows you to select fields to use in your formula. Inserting from this menu automatically generates the correct syntax for accessing fields.
![[a8dad74cefc5d8f2362bd238e4115b99_formulas-insert-field.webp]]

3. The **Insert Operator** button opens a dropdown list of the available mathematical and logical operators.
![[4b2ea4aa3b8bacd05a6bbb3b562511d9_formulas-insert-operator.webp]]

4. The Functions menu is where you view and insert formula functions. Functions are more complicated operations that are preimplemented by Salesforce. Some functions can be used as-is (for example, the TODAY() function returns the current date), while others require extra pieces of information, called parameters. The LEN(text) function, for instance, finds the length of the text you input as a parameter. The formula LEN("Hello") returns a value of 5.
 ![[4cda35f93c7c8a659c31d04724105167_formulas-insert-function.webp]]

5. The text area is where you enter your formula. When writing formulas, keep in mind that:
  - Whitespace doesn’t matter. You can insert as many spaces and line breaks as you want without affecting the formula’s execution.
  - ==Formulas are case sensitive==. Pay attention to capitalization of field and object names.
  - When working with numbers, the standard order of operations applies.

6. Once you’ve written a formula, you can use the **Check Syntax** button to ensure that everything is in working order before saving. If your formula has issues, the syntax checker alerts you to specific problems.

### Example :Find Distinct Objects Using the Power of One

Organizations often want to count the number of unique objects in a report with hundreds of records. Say, for example, you have a hundred opportunities listed in a report, but only a handful of users own all these opportunities. How do you find the number of distinct users? This task sounds difficult, but it’s one of the easiest formulas you can write. It’s called the Power of One.

To write this formula, create a custom formula field on the User object. Name it Unique Users, give it a Number return type, and select 0 from the Decimal Places dropdown list. Click Next to open the formula editor. For this formula, you don’t need to insert any fields, operators, or functions. Instead, enter the number 1.
![[345cb6052afab5fdfbcab44958df3d46_formulas-one.webp]]

