---
title: My Blog
description: Like I said, my bloggg!
example:
  custom:
    variables:
    - one
    - two
    - three
---


  # Le {{title}}
  
  {{description}}
</div>
<ul>
  {{#each example.custom.variables}}
  <li>{{.}}</li>
  {{/each}}
</ul>