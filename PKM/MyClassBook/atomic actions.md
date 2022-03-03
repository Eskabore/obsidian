# Atomic actions

/

# Linearizability

In [[concurrent programming]], an operation (or set of operations) is linearizable if it consists of an ordered list of invocation and response events (callbacks), that may be extended by adding response events such that:

    The extended list can be re-expressed as a sequential history (is serializable), and
    That sequential history is a subset of the original unextended list.