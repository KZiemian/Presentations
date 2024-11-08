https://www.tutorialspoint.com/execute_julia_online.php

import InteractiveUtils

function funAdd(x, y)
    return x + y
end

codeExample = InteractiveUtils.@code_lowered funAdd(1, 2)
codeExample = InteractiveUtils.@code_warntype funAdd(1, 2)
codeExample = InteractiveUtils.@code_warntype funAdd(1.0, 2.0)
codeExample = InteractiveUtils.@code_llvm funAdd(1, 2)
codeExample = InteractiveUtils.@code_llvm funAdd(1.0, 2.0)
codeExample = InteractiveUtils.@code_native funAdd(1, 2)

println(codeExample)

function simpleTest(x, y)
    val1 = x + y
    val2 = x - y + 3

    if val1 > val2
        return val1
    else
        return val2
    end
end

codeExample = InteractiveUtils.@code_lowered simpleTest(1, 2)
codeExample = InteractiveUtils.@code_warntype simpleTest(1, 2)
codeExample = InteractiveUtils.@code_llvm simpleTest(1, 2)
codeExample = InteractiveUtils.@code_native simpleTest(1, 2)

println(codeExample)

function stupidFun(x)
    y = x + 3
    y = y - x

    return y
end

codeExample = InteractiveUtils.@code_lowered stupidFun(1)
codeExample = InteractiveUtils.@code_warntype stupidFun(1)
codeExample = InteractiveUtils.@code_llvm stupidFun(1)
codeExample = InteractiveUtils.@code_native stupidFun(1)

println(codeExample)

function sumFun(N)
    sum = 0

    for i in 1:N
        sum += i
    end

    return sum
end

codeExample = InteractiveUtils.@code_lowered sum(100)
codeExample = InteractiveUtils.@code_warntype sum(100)
codeExample = InteractiveUtils.@code_llvm sum(100)
codeExample = InteractiveUtils.@code_native sum(100)

println(codeExample)
